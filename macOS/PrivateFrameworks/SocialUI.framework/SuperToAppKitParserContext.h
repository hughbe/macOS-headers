//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableAttributedString;

@interface SuperToAppKitParserContext : IMFromSuperParserContext
{
    NSMutableAttributedString *_appKitAttributedString;
    long long _baseWritingDirection;
    BOOL _didAddBodyAttributes;
    BOOL _shouldEncodeFileTransfers;
    BOOL _shouldEncodeInlineAttachments;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldEncodeInlineAttachments; // @synthesize shouldEncodeInlineAttachments=_shouldEncodeInlineAttachments;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)name;
- (long long)baseWritingDirection;
- (id)appKitAttributedString;
- (id)initWithAttributedString:(id)arg1 shouldEncodeFileTransfers:(BOOL)arg2;
- (id)initWithAttributedString:(id)arg1;

@end

