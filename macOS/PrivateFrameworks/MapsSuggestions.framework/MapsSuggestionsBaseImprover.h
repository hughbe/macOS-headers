//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsImprover-Protocol.h>

@class NSString;

@interface MapsSuggestionsBaseImprover : NSObject <MapsSuggestionsImprover>
{
}

+ (BOOL)isEnabled;
- (BOOL)improveUndecoratedSubtitle:(id)arg1 forEntry:(id)arg2;
- (BOOL)improveUndecoratedTitle:(id)arg1 forEntry:(id)arg2;
- (BOOL)improveEntry:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

