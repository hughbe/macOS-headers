//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMInvitationParticipant-Protocol.h>

@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying>
{
    NSString *_emailAddressString;
    NSString *_phoneNumberString;
    NSString *_localizedName;
    NSString *_firstName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(readonly, nonatomic) NSString *emailAddressString; // @synthesize emailAddressString=_emailAddressString;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

