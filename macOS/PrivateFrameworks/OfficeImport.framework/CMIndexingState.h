//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMIndexingState : CMState
{
    NSMutableDictionary *_metadata;
    NSMutableString *_textContent;
}

- (void).cxx_destruct;
@property(retain) NSMutableString *textContent; // @synthesize textContent=_textContent;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)init;

@end

