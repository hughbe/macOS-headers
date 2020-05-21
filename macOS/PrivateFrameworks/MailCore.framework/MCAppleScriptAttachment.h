//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAttachment, NSScriptClassDescription, NSScriptObjectSpecifier, NSString;

@interface MCAppleScriptAttachment : NSObject
{
    NSString *_uuidString;
    MCAttachment *_attachment;
    NSScriptObjectSpecifier *_messageContainer;
    NSScriptClassDescription *_messageClassDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSScriptClassDescription *messageClassDescription; // @synthesize messageClassDescription=_messageClassDescription;
@property(retain, nonatomic) NSScriptObjectSpecifier *messageContainer; // @synthesize messageContainer=_messageContainer;
@property(retain, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
- (id)objectSpecifier;
@property(readonly, copy, nonatomic) NSString *uniqueID;
- (id)handleSaveAttachmentCommand:(id)arg1;
- (BOOL)downloaded;
- (id)fileSize;
- (id)mimeType;
- (id)name;
- (id)init;
- (id)initWithMessage:(id)arg1 attachment:(id)arg2;

@end

