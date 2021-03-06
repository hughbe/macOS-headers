//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/TTZoomController.h>

@class NSHashTable;

@interface ICMZoomController : TTZoomController
{
    BOOL _onlyAcceptsCustomZooms;
    long long _localZoomFactorIndex;
    double _attachmentBrickZoomFactor;
    NSHashTable *_delegates;
    long long _savedZoomFactorIndex;
}

+ (double)checklistZoomFactor;
+ (double)attachmentBrickZoomFactor;
+ (double)noteListZoomFactor;
+ (double)globalZoomFactor;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)arg1;
+ (id)checklistZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (id)attachmentBrickZoomFactors;
+ (id)noteListZoomFactors;
+ (id)localZoomFactors;
+ (id)globalZoomFactors;
+ (long long)globalZoomFactorIndex;
+ (void)setGlobalZoomFactorIndex:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long savedZoomFactorIndex; // @synthesize savedZoomFactorIndex=_savedZoomFactorIndex;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) BOOL onlyAcceptsCustomZooms; // @synthesize onlyAcceptsCustomZooms=_onlyAcceptsCustomZooms;
@property(nonatomic) double attachmentBrickZoomFactor; // @synthesize attachmentBrickZoomFactor=_attachmentBrickZoomFactor;
@property(nonatomic) long long localZoomFactorIndex; // @synthesize localZoomFactorIndex=_localZoomFactorIndex;
- (void)removeDelegate:(id)arg1;
- (void)notifyDelegates;
- (void)addDelegate:(id)arg1;
- (void)applyZoomFactorIndex;
- (BOOL)zoomToCustomFactor:(double)arg1;
- (BOOL)zoomResetToGlobalDefault;
- (BOOL)zoomOut;
- (BOOL)zoomIn;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
@property(readonly, nonatomic) double localZoomFactor;
- (id)init;

@end

