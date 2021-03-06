//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABTask.h>

@class NSArray;

@interface ABGravatarImageTask : ABTask
{
    NSArray *_emailAddresses;
}

- (id)run:(id *)arg1;
- (id)urlForEmailAddress:(id)arg1;
- (id)filenameForEmailAddress:(id)arg1;
- (id)hashForEmailAddress:(id)arg1;
- (long long)imageSize;
- (void)dealloc;
- (id)initWithEmailAddresses:(id)arg1;

@end

