//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, PLManagedAsset;

@interface PLExtendedAttributes : PLManagedObject
{
}

+ (id)distinctValuesForKeyPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSNumber *aperture; // @dynamic aperture;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSNumber *bitrate; // @dynamic bitrate;
@property(retain, nonatomic) NSString *cameraMake; // @dynamic cameraMake;
@property(retain, nonatomic) NSString *cameraModel; // @dynamic cameraModel;
@property(retain, nonatomic) NSString *codec; // @dynamic codec;
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSNumber *exposureBias; // @dynamic exposureBias;
@property(retain, nonatomic) NSNumber *flashFired; // @dynamic flashFired;
@property(retain, nonatomic) NSNumber *focalLength; // @dynamic focalLength;
@property(retain, nonatomic) NSNumber *fps; // @dynamic fps;
@property(retain, nonatomic) NSNumber *iso; // @dynamic iso;
@property(retain, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *lensModel; // @dynamic lensModel;
@property(retain, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSNumber *meteringMode; // @dynamic meteringMode;
@property(retain, nonatomic) NSNumber *sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) NSNumber *shutterSpeed; // @dynamic shutterSpeed;
@property(retain, nonatomic) NSNumber *trackFormat; // @dynamic trackFormat;
@property(retain, nonatomic) NSNumber *whiteBalance; // @dynamic whiteBalance;

@end

