//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNFuture, CNLikeness;

@protocol CNContactLikenessMutator <NSObject>
- (CNFuture *)setLikenessAsCurrent:(CNLikeness *)arg1;
- (CNFuture *)deleteLikeness:(CNLikeness *)arg1;
- (CNFuture *)updateLikeness:(CNLikeness *)arg1;
- (CNFuture *)addNewLikeness:(CNLikeness *)arg1;
@end

