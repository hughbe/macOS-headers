//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSVSystemDialogResponse : NSObject
{
    long long _buttonIdentifier;
    NSArray *_textFieldValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(readonly, nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
- (id)description;
- (id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2;

@end

