//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INNoteContent, INSpeakableString;

@protocol INCreateNoteIntentExport <NSObject, JSExport>
@property(copy) INSpeakableString *groupName;
@property(copy) INNoteContent *content;
@property(copy) INSpeakableString *title;
- (id)init;
@end

