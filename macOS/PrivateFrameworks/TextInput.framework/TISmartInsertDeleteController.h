//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject
{
    BOOL _enabled;
    TITextInputTraits *_textInputTraits;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id *)arg3 outAfterString:(id *)arg4;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2;
- (void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long *)arg2 outAfterLength:(unsigned long long *)arg3;
- (id)initWithTextInputTraits:(id)arg1;

@end

