//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/STSStgObject.h>

__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject
{
    struct _Storage *m_pCStorage;
}

- (void)setClass:(CDStruct_214f2dba)arg1;
- (int)getChildType:(id)arg1;
- (id)getChildrenInfo;
- (id)getInfo;
- (id)openStorage:(id)arg1 withMode:(int)arg2;
- (id)openStream:(id)arg1 withMode:(int)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithCStorage:(struct _Storage *)arg1;
- (id)init;

@end

