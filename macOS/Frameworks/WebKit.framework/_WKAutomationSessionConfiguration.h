//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>
{
    BOOL _allowsInsecureMediaCapture;
    BOOL _suppressesICECandidateFiltering;
}

@property(nonatomic) BOOL suppressesICECandidateFiltering; // @synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering;
@property(nonatomic) BOOL allowsInsecureMediaCapture; // @synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

