//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest
{
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    long long _destinationFormat;
    double _destinationCompressionQuality;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double destinationCompressionQuality; // @synthesize destinationCompressionQuality=_destinationCompressionQuality;
@property(nonatomic) long long destinationFormat; // @synthesize destinationFormat=_destinationFormat;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)debugDescription;
- (long long)operationPriority;
- (Class)operationClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3;

@end

