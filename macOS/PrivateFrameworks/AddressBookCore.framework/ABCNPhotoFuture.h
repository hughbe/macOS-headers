//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNFuture.h>

@class ABAddressBook, ABPerson;

@interface ABCNPhotoFuture : CNFuture
{
    ABAddressBook *_addressBook;
    ABPerson *_person;
    long long _tag;
}

- (void)didCancel;
- (id)photoForImageData:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 person:(id)arg2;

@end

