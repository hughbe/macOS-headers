//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata, _INPBNoteContent;

@protocol _INPBCreateNoteIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) BOOL hasContent;
@property(retain, nonatomic) _INPBNoteContent *content;
@end

