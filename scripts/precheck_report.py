#!/usr/bin/env python3
import argparse
import xml.etree.ElementTree as ET


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--report", required=True)
    parser.add_argument("--title", required=True)
    args = parser.parse_args()

    with open(args.report) as f:
        report = ET.parse(f)

    items = report.getroot().find("items")

    # Iterate over all items in the report
    error_count = 0
    for item in items:
        error_count += 1

    if error_count > 0:
        print(f"🔴 {args.title} DRC checks failed, with {error_count} violations!  ")
        exit(1)
    else:
        print(f"✅ {args.title} DRC checks passed!  ")

if __name__ == "__main__":
    main()
