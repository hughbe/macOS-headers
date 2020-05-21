//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DEExtensionHostContext, NSExtension, NSString;

@interface DEExtension : NSObject
{
    BOOL _isLoggingEnabled;
    BOOL _allowUserAttachmentSelection;
    NSString *_attachmentsName;
    NSString *_identifier;
    DEExtensionHostContext *_context;
    NSString *_loggingConsent;
    NSExtension *_extension;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) BOOL allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property(retain, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;
@property(nonatomic) BOOL isLoggingEnabled; // @synthesize isLoggingEnabled=_isLoggingEnabled;
@property(retain, nonatomic) DEExtensionHostContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *attachmentsName; // @synthesize attachmentsName=_attachmentsName;
- (id)description;
- (void)attachmentsForParameters:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;
- (void)performWithHostContext:(CDUnknownBlockType)arg1;
- (void)endUsingExtension;
- (id)initWithNSExtension:(id)arg1;

@end

