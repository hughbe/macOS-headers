//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSAttachmentIdType, NSDateComponents, NSString;

@interface EWSAttachmentType : NSObject <XSDefinitionProvider>
{
    BOOL _IsInline;
    BOOL _IsInlineSpecified;
    BOOL _LastModifiedTimeSpecified;
    BOOL _SizeSpecified;
    EWSAttachmentIdType *_AttachmentId;
    NSString *_Name;
    NSString *_ContentType;
    NSString *_ContentId;
    NSString *_ContentLocation;
    NSDateComponents *_LastModifiedTime;
    long long _Size;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) BOOL SizeSpecified; // @synthesize SizeSpecified=_SizeSpecified;
@property(nonatomic) long long Size; // @synthesize Size=_Size;
@property(nonatomic) BOOL LastModifiedTimeSpecified; // @synthesize LastModifiedTimeSpecified=_LastModifiedTimeSpecified;
@property(retain, nonatomic) NSDateComponents *LastModifiedTime; // @synthesize LastModifiedTime=_LastModifiedTime;
@property(nonatomic) BOOL IsInlineSpecified; // @synthesize IsInlineSpecified=_IsInlineSpecified;
@property(nonatomic) BOOL IsInline; // @synthesize IsInline=_IsInline;
@property(copy, nonatomic) NSString *ContentLocation; // @synthesize ContentLocation=_ContentLocation;
@property(copy, nonatomic) NSString *ContentId; // @synthesize ContentId=_ContentId;
@property(copy, nonatomic) NSString *ContentType; // @synthesize ContentType=_ContentType;
@property(copy, nonatomic) NSString *Name; // @synthesize Name=_Name;
@property(retain, nonatomic) EWSAttachmentIdType *AttachmentId; // @synthesize AttachmentId=_AttachmentId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

