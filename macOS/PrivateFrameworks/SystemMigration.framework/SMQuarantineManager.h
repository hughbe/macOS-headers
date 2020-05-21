//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SMQuarantineManager : NSObject
{
    unsigned long long _seenReasons;
    NSXPCConnection *_pdfXPCConnection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *pdfXPCConnection; // @synthesize pdfXPCConnection=_pdfXPCConnection;
@property unsigned long long seenReasons; // @synthesize seenReasons=_seenReasons;
- (void)renderPDF:(id)arg1 to:(id)arg2;
- (id)createLPDFShellAt:(id)arg1;
- (void)generateSummaryDocument:(id)arg1 withErrors:(id)arg2;
- (void)generateSummaryDocumentWithErrors:(id)arg1;
- (void)clearSecurityFromQuarantineAtRoot:(id)arg1;
- (void)moveAsideExistingQuarantineAtRoot:(id)arg1;
- (id)quarantineLocationForReason:(unsigned long long)arg1;
- (id)init;

@end

