//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject
{
    CalLocation *_calLocation;
}

+ (id)classesForKey;
- (void).cxx_destruct;
@property(copy, nonatomic) CalLocation *calLocation; // @synthesize calLocation=_calLocation;
- (id)createStructuredLocation;
- (id)initWithStructuredLocation:(id)arg1;

@end

