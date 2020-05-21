//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord
{
    TIKeyboardLayout *_keyboardLayout;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TIKeyboardLayout *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

