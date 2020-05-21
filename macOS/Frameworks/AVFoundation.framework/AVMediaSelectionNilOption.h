//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionNilOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)description;
- (BOOL)_representsNilSelection;
- (BOOL)isPlayable;
- (id)_groupMediaType;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithGroup:(id)arg1;

@end

