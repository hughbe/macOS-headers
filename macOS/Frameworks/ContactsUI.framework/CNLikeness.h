//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PRLikeness;

@interface CNLikeness : NSObject
{
    BOOL _hasBeenPersisted;
    BOOL _isEditable;
    BOOL _hasBeenEdited;
    BOOL _hasPictureDataBeenEdited;
    PRLikeness *_personaLikeness;
    NSString *_contactIdentifier;
    NSString *_sourceContainerName;
    NSString *_sourceContainerIdentifier;
    struct CGImage *_originalLikenessImage;
    struct CGRect _originalLikenessCropRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect originalLikenessCropRect; // @synthesize originalLikenessCropRect=_originalLikenessCropRect;
@property(nonatomic) struct CGImage *originalLikenessImage; // @synthesize originalLikenessImage=_originalLikenessImage;
@property(nonatomic) BOOL hasPictureDataBeenEdited; // @synthesize hasPictureDataBeenEdited=_hasPictureDataBeenEdited;
@property(readonly, nonatomic) BOOL hasBeenEdited; // @synthesize hasBeenEdited=_hasBeenEdited;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) BOOL hasBeenPersisted; // @synthesize hasBeenPersisted=_hasBeenPersisted;
@property(retain, nonatomic) NSString *sourceContainerIdentifier; // @synthesize sourceContainerIdentifier=_sourceContainerIdentifier;
@property(retain, nonatomic) NSString *sourceContainerName; // @synthesize sourceContainerName=_sourceContainerName;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) PRLikeness *personaLikeness; // @synthesize personaLikeness=_personaLikeness;
@property(readonly, nonatomic) PRLikeness *originalLikeness;
- (void)dealloc;
- (id)initWithLikeness:(id)arg1 contactIdentifier:(id)arg2 sourceContainerName:(id)arg3 sourceContainerIdentifier:(id)arg4 isEditable:(BOOL)arg5 hasBeenPersisted:(BOOL)arg6;

@end

