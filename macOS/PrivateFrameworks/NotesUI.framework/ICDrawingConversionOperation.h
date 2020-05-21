//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICAttachment, ICBaseTextAttachment, NSManagedObjectID;

@interface ICDrawingConversionOperation : NSOperation
{
    BOOL _isAutomatic;
    NSManagedObjectID *_attachmentID;
    NSManagedObjectID *_finalAttachmentID;
    ICBaseTextAttachment *_textAttachment;
    ICAttachment *_attachment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) ICBaseTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, nonatomic) NSManagedObjectID *finalAttachmentID; // @synthesize finalAttachmentID=_finalAttachmentID;
@property(readonly, nonatomic) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(readonly, nonatomic) BOOL isAutomatic; // @synthesize isAutomatic=_isAutomatic;
- (void)main;
- (id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(BOOL)arg3;

@end

