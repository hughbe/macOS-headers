//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, _ICDDirectoryObject;

__attribute__((visibility("hidden")))
@interface ICDBaseObjectImp : NSObject
{
    void *m_ObjectInformation;
    _ICDDirectoryObject *m_parent;
    NSString *m_savePath;
    unsigned int m_ICAObject;
    int m_ObjectInfoSize;
    BOOL m_cleanUpCalled;
    NSMutableDictionary *m_ObjectDict;
    BOOL _gotMetadata;
    NSMutableDictionary *_metadata;
    struct os_unfair_lock_s _lockObject;
}

- (unsigned long long)unsignedIntegerValue;
- (short)uploadFile:(id)arg1;
- (short)downloadFile:(id)arg1;
- (short)updateSavedFileAt:(id)arg1 optionsDictionary:(id)arg2;
- (short)saveSource:(id)arg1 toFileAtPath:(id)arg2 commandParamDict:(id)arg3;
- (short)saveSource:(id)arg1 toFileAtPath:(id)arg2;
- (short)saveSource:(id)arg1 toFileAtPath:(id)arg2 optionsDictionary:(id)arg3;
- (void)adjustCreationDate:(id)arg1 optionsDictionary:(id)arg2;
- (short)writeData:(id)arg1 data:(id)arg2;
- (id)readData;
- (id)createUniqueFileName:(id)arg1 useTimeDelta:(BOOL)arg2 exists:(char *)arg3;
- (BOOL)sameDateTime:(char *)arg1 useTimeDelta:(BOOL)arg2;
- (BOOL)sameSize:(long long)arg1;
- (void)getFileDate:(id)arg1 creationDate:(char [20])arg2;
- (void)addObjectInfoForTree:(id)arg1;
- (void)addObjectInfoForData:(id)arg1;
- (void)addObjectNameExtension:(id)arg1;
- (short)getStandardPropertyData:(struct ICD_GetPropertyDataPB *)arg1;
- (short)getItemData:(struct ICD_GetPropertyDataPB *)arg1;
- (short)getThumbnailIconBuffer:(char *)arg1 withOrientation:(int)arg2 width:(int)arg3 height:(int)arg4 bitsPerComponent:(int)arg5 andNumComponents:(int)arg6;
- (short)getThumbnailData:(struct ICD_GetPropertyDataPB *)arg1;
- (short)getPropertyDataFromDictionary:(struct ICD_GetPropertyDataPB *)arg1 propertyType:(unsigned int)arg2;
- (short)getPropertyData:(struct ICD_GetPropertyDataPB *)arg1;
- (void)addObjectInfoToDict:(id)arg1;
- (short)newObjectCreated:(void *)arg1 completion:(CDUnknownFunctionPointerType)arg2 index:(unsigned int)arg3 icaObject:(unsigned int *)arg4;
- (id)getObjectPropertyDictionary:(id)arg1;
- (id)copyMetadataFromDataProvider:(struct CGDataProvider *)arg1 fileExtension:(id)arg2 final:(BOOL)arg3;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)invalidateMetaData;
- (id)deviceObject;
- (id)findObject:(unsigned int)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setICAObject:(unsigned int)arg1;
- (unsigned int)icaObject;
- (void)countItems:(unsigned int *)arg1;
- (id)findICAObject:(unsigned int)arg1;
- (void)addNewIndexedObject:(id)arg1;
- (void)handleStoreAdded;
- (void *)objectInfo;
- (void)removeFromTree;
- (void)callBulkNewObject;
- (void)createChildren:(int)arg1;
- (void)buildStandardProperties:(struct ICD_BulkNewPropertyPB *)arg1 index:(unsigned int *)arg2;
- (void)dump;
- (id)description;
- (void)callCleanup;
- (void)unlockObject;
- (void)lockObject;
- (void)dealloc;
- (id)initWithObjectInformation:(void *)arg1;
- (long long)compareObjectHandle:(id)arg1;

@end

