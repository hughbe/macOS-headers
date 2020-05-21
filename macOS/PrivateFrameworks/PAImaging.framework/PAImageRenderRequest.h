//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>

@class IPAColorProfile, NSArray, NSError, NSString, NSUUID;
@protocol DGDescriptionCompositionProvider, NUScalePolicy, PFCanceler;

@interface PAImageRenderRequest : NSObject <NSCopying>
{
    BOOL _bakeOrientation;
    NSString *_name;
    id <NUScalePolicy> _scalePolicy;
    IPAColorProfile *_colorProfile;
    id <PFCanceler> _canceler;
    id <DGDescriptionCompositionProvider> _compositionProvider;
    NSUUID *_adjustmentUUID;
    NSString *_adjustmentIdentifier;
    NSString *_adjustmentKey;
    NSArray *_adjustmentValues;
    NSError *_error;
}

+ (id)cancelRequestError;
+ (id)invalidRequestError:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSArray *adjustmentValues; // @synthesize adjustmentValues=_adjustmentValues;
@property(copy) NSString *adjustmentKey; // @synthesize adjustmentKey=_adjustmentKey;
@property(readonly) NSString *adjustmentIdentifier; // @synthesize adjustmentIdentifier=_adjustmentIdentifier;
@property(copy) NSUUID *adjustmentUUID; // @synthesize adjustmentUUID=_adjustmentUUID;
@property(retain) id <DGDescriptionCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
@property BOOL bakeOrientation; // @synthesize bakeOrientation=_bakeOrientation;
@property(retain) id <PFCanceler> canceler; // @synthesize canceler=_canceler;
@property(retain) IPAColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)submit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)interactiveOperationIndex;
- (id)compositionForImageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfImages;
- (BOOL)isCanceled;
- (BOOL)validate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

