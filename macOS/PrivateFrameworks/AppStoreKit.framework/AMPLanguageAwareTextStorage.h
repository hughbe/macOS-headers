//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreKit/AMPWritingDirectionContentProtocol-Protocol.h>

@class MISSING_TYPE, NSTextStorage;

@interface AMPLanguageAwareTextStorage : NSObject <AMPWritingDirectionContentProtocol>
{
    MISSING_TYPE *textStorage;
    MISSING_TYPE *originalTextStorageDelegate;
    MISSING_TYPE *languageAwareString;
}

- (void).cxx_destruct;
- (id)init;
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(unsigned long long)arg4 cacheLayoutInfo:(BOOL)arg5;
- (id)writingDirectionsQuantities;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)initWithTextStorage:(id)arg1;
@property(nonatomic, retain) NSTextStorage *textStorage; // @synthesize textStorage;

@end

