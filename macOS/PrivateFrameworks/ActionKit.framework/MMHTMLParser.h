//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMHTMLParser : NSObject
{
}

- (void)_parseAttributesWithScanner:(id)arg1;
- (BOOL)_parseAttributeValueWithScanner:(id)arg1;
- (BOOL)_parseStringWithScanner:(id)arg1;
- (struct _NSRange)_parseNameWithScanner:(id)arg1;
- (id)_parseLenientBlockTagWithScanner:(id)arg1;
- (BOOL)_parseEndTag:(id)arg1 withScanner:(id)arg2;
- (id)_parseStrictBlockTagWithScanner:(id)arg1;
- (id)parseInlineTagWithScanner:(id)arg1;
- (id)parseCommentWithScanner:(id)arg1;
- (id)parseBlockTagWithScanner:(id)arg1;

@end

