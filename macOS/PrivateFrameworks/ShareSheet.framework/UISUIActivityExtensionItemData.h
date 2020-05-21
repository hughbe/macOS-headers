//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding>
{
    NSArray *_extensionItems;
    NSDictionary *_openURLAnnotationsByURL;
    struct __CFDictionary *_itemProviderOrExtensionItemWithMetadataToUUID;
    NSMutableDictionary *_attachmentNamesByItemUUID;
    NSMutableDictionary *_subjectsByItemUUID;
    NSMutableDictionary *_previewImagesByItemUUID;
    NSMutableDictionary *_previewImageDataByItemUUID;
    NSMutableDictionary *_dataTypesByItemUUID;
}

+ (id)_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;
+ (id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *dataTypesByItemUUID; // @synthesize dataTypesByItemUUID=_dataTypesByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *previewImageDataByItemUUID; // @synthesize previewImageDataByItemUUID=_previewImageDataByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *previewImagesByItemUUID; // @synthesize previewImagesByItemUUID=_previewImagesByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *subjectsByItemUUID; // @synthesize subjectsByItemUUID=_subjectsByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *attachmentNamesByItemUUID; // @synthesize attachmentNamesByItemUUID=_attachmentNamesByItemUUID;
@property(readonly, nonatomic) struct __CFDictionary *itemProviderOrExtensionItemWithMetadataToUUID; // @synthesize itemProviderOrExtensionItemWithMetadataToUUID=_itemProviderOrExtensionItemWithMetadataToUUID;
@property(retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // @synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL;
@property(retain, nonatomic) NSArray *extensionItems; // @synthesize extensionItems=_extensionItems;
- (id)_getItemUUIDForItem:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_setItemUUID:(id)arg1 forItem:(id)arg2;
- (void)_changeUUIDMappingFromExtensionItems:(id)arg1 toClonedExtensionItems:(id)arg2;
- (id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg1 attachments:(id)arg2;
- (void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg1;
- (void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg1;
- (void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg1;
- (void)prepareForSendingAsCompletionToHostWithAuditToken:(CDStruct_6ad76789)arg1;
- (void)prepareForSendingToExtension:(id)arg1;
- (id)allDataTypes;
- (id)dataTypeForItem:(id)arg1;
- (void)addDataType:(id)arg1 forItem:(id)arg2;
- (id)previewImageDataForItem:(id)arg1;
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;
- (id)previewImageForItem:(id)arg1;
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;
- (id)subjectForItem:(id)arg1;
- (void)addSubject:(id)arg1 forItem:(id)arg2;
- (id)attachmentNameForItem:(id)arg1;
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

