//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/NSObject-Protocol.h>

@protocol IMKCandidateMenu, IMKTextDocument;

@protocol IMKKeyboard <NSObject>
@property(readonly, nonatomic) id <IMKCandidateMenu> candidateMenu;
@property(retain, nonatomic) id <IMKTextDocument> attachedTextDocument;
@end

