//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_accessLevel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel; // @synthesize accessLevel=_accessLevel;
- (id)copyParseRules;
- (id)initWithAccess:(int)arg1;
- (id)init;

@end

