//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDSystemAvailabilityWatcher;

__attribute__((visibility("hidden")))
@interface CKDSystemAvailabilityWatcherWrapper : NSObject
{
    id <CKDSystemAvailabilityWatcher> _delegate;
    NSString *_personaID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) __weak id <CKDSystemAvailabilityWatcher> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end

