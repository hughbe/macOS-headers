//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICLegacyAttachment : NSObject
{
}

+ (id)attachmentWithContentID:(id)arg1 context:(id)arg2;
+ (id)typeUTIFromFileURL:(id)arg1 mimeType:(id)arg2;
+ (void)importFileAtURL:(id)arg1 toAttachment:(id)arg2;
+ (void)importLegacyAttachment:(id)arg1 toNote:(id)arg2;
+ (id)contentIDStringFromCIDURL:(id)arg1;

@end

