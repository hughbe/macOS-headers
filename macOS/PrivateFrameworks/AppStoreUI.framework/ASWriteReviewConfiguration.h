//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreUI/NSCopying-Protocol.h>

@class CKStoreClient, NSImage, NSMutableArray, NSNumber, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ASWriteReviewConfiguration : NSObject <NSCopying>
{
    BOOL _skipRating;
    BOOL _sandboxed;
    NSNumber *_adamId;
    NSString *_appName;
    NSImage *_appIcon;
    CKStoreClient *_storeClient;
    NSNumber *_rating;
    NSString *_reviewTitle;
    NSString *_reviewBody;
    NSString *_nickname;
    NSURL *_ratingURL;
    NSURL *_writeReviewURL;
    NSURL *_saveReviewURL;
    NSObject<OS_dispatch_queue> *_queue;
    long long _readyState;
    NSMutableArray *_readyCallbacks;
    NSImage *_resizedAppIcon;
}

+ (id)resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *resizedAppIcon; // @synthesize resizedAppIcon=_resizedAppIcon;
@property(retain, nonatomic) NSMutableArray *readyCallbacks; // @synthesize readyCallbacks=_readyCallbacks;
@property(nonatomic) long long readyState; // @synthesize readyState=_readyState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURL *saveReviewURL; // @synthesize saveReviewURL=_saveReviewURL;
@property(retain, nonatomic) NSURL *writeReviewURL; // @synthesize writeReviewURL=_writeReviewURL;
@property(retain, nonatomic) NSURL *ratingURL; // @synthesize ratingURL=_ratingURL;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property(readonly, nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) BOOL skipRating; // @synthesize skipRating=_skipRating;
@property(readonly, nonatomic) NSImage *appIcon; // @synthesize appIcon=_appIcon;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
- (void)performURLFetch;
- (void)transitionToReadyAndInvokeCallbacks;
- (void)performWhenReady:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdamId:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 skipRating:(BOOL)arg4 storeClient:(id)arg5;

@end

