//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@class NSURL;

@interface MCLargeAttachmentFileWrapper : MCFileWrapper
{
    unsigned long long _attachmentSize;
    NSURL *_fileToCopy;
}

+ (id)localAttachmentFilesDirectory;
+ (id)fileWrapperWithURL:(id)arg1 andContentID:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *fileToCopy; // @synthesize fileToCopy=_fileToCopy;
@property(nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_attachmentSize;
- (BOOL)isALargeAttachment;
- (id)symbolicLinkDestinationURL;
- (id)archivedDataWithPartNumber:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

