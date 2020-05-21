//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFWebResource.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WFHTMLStringWebResource : WFWebResource
{
    NSString *_htmlString;
    NSURL *_baseURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)textEncodingName;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (id)loadInWKWebView:(id)arg1;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;

@end

