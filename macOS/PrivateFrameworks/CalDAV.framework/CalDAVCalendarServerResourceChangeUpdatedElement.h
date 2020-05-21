//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement
{
    BOOL _content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *calendarChanges; // @synthesize calendarChanges=_calendarChanges;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(nonatomic) BOOL content; // @synthesize content=_content;
- (id)copyParseRules;
- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (id)init;

@end

