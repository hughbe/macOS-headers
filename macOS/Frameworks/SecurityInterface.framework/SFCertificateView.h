//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@interface SFCertificateView : NSVisualEffectView
{
    id _reserved_SFCertificateView;
}

+ (id)certificateNameDictionary:(id)arg1 showsIssuer:(BOOL)arg2 selected:(BOOL)arg3;
+ (id)attributedCertificateName:(id)arg1 showsIssuer:(BOOL)arg2 selected:(BOOL)arg3;
+ (id)attributedCertificateName:(id)arg1 showsIssuer:(BOOL)arg2 selected:(BOOL)arg3 prefix:(id)arg4;
+ (id)attributedCertificateName:(id)arg1 showsStatus:(BOOL)arg2 showsIssuer:(BOOL)arg3 selected:(BOOL)arg4 prefix:(id)arg5;
+ (id)cachedImageNamed:(id)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (id)filenameExtension:(unsigned int)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)exportedText:(unsigned int)arg1 forFile:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (id)draggedImage;
- (id)printJobTitle;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (long long)_minVisibleHeight;
- (long long)_minBoundsHeight;
- (void)_updateEditableUIState;
- (void)_recreateViews;
- (void)_createDetailsView:(BOOL)arg1;
- (void)_createTrustView:(BOOL)arg1;
- (void)_createViews;
- (void)certificationPathDisclosedClicked:(id)arg1;
- (void)policiesDisclosedClicked:(id)arg1;
- (void)detailsDisclosedClicked:(id)arg1;
- (BOOL)certificationPathDisclosed;
- (void)setCertificationPathDisclosed:(BOOL)arg1;
- (BOOL)policiesDisclosed;
- (void)_sizePolicies;
- (void)setPoliciesDisclosed:(BOOL)arg1;
- (BOOL)detailsDisclosed;
- (void)_updateMinVisibleHeight;
- (void)_sizeDetails;
- (void)setDetailsDisclosed:(BOOL)arg1;
- (void)helpButtonClicked:(id)arg1;
- (void)ubertrustPopupSelected:(id)arg1;
- (void)trustPopupSelected:(id)arg1;
- (void)_trustValues;
- (void)_setTrustValues;
- (void)_updateTrustPopupValues:(BOOL)arg1;
- (id)_certificateData;
- (void)_setCertificateData:(id)arg1;
- (void)_updateUbertrustPopupValues:(BOOL)arg1;
- (void)_updateTrustValidity:(BOOL)arg1;
- (id)_attrStatusString:(id)arg1 status:(int)arg2;
- (void)_setStdTextAttrs:(id)arg1 select:(BOOL)arg2 font:(id)arg3 color:(id)arg4;
- (unsigned int)_currentModifierFlags;
- (BOOL)certificationPathDisplayed;
- (void)setDisplayCertificationPath:(BOOL)arg1;
- (BOOL)detailsDisplayed;
- (void)setDisplayDetails:(BOOL)arg1;
- (void)saveTrustSettings;
- (BOOL)isTrustDisplayed;
- (unsigned int)trustSettingsDomain;
- (void)setTrustSettingsDomain:(unsigned int)arg1;
- (void)setDisplayTrust:(BOOL)arg1;
- (BOOL)isEditable;
- (void)setEditableTrust:(BOOL)arg1;
- (struct __SecTrust *)_trust;
- (void)_setTrust:(struct __SecTrust *)arg1;
- (void)_setTrustWithPolicies:(id)arg1;
- (void)_evaluateTrust;
- (id)policies;
- (void)setPolicies:(id)arg1;
- (struct __SecCertificate *)certificate;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

