//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement
{
    BOOL _hadMoreInstances;
    NSString *_componentType;
    NSString *_summary;
    NSString *_displayName;
    ICSDateValue *_nextInstance;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;
@property(retain, nonatomic) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
- (id)copyParseRules;
- (void)setDeletedDetails:(id)arg1;
- (id)init;

@end

