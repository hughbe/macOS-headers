//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo
{
}

- (void)addSubField:(id)arg1;
- (BOOL)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1 parentOffset:(unsigned int)arg2;
@property(retain, nonatomic) VMUClassInfo *destinationLayout; // @dynamic destinationLayout;
@property(nonatomic) unsigned int stride; // @dynamic stride;
@property(nonatomic) unsigned int scannableSize; // @dynamic scannableSize;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) BOOL isCapture; // @dynamic isCapture;
@property(nonatomic) BOOL isByref; // @dynamic isByref;
- (void)setSize:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
@property(nonatomic) unsigned int scanType; // @dynamic scanType;
- (void)setTypeName:(id)arg1;
@property(copy, nonatomic) NSString *ivarName; // @dynamic ivarName;

@end

