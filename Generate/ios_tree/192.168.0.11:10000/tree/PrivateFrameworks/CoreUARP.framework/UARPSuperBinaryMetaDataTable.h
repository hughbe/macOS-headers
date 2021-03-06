/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSDictionary * _dict;
    NSNumber * _formatVersion;
    NSURL * _plist;
    NSMutableArray * _values;
}

@property (readonly) NSDictionary *dict;
@property (readonly) NSNumber *formatVersion;

- (void).cxx_destruct;
- (void)addAppleSpecificTLVs;
- (void)addAppleSpecificTLVs2;
- (void)addHostSpecificTLVs;
- (void)addHostSpecificTLVs2;
- (id)dict;
- (bool)expandPlist:(id*)arg1;
- (id)formatVersion;
- (id)initAppleSpecificWithFormatVersion:(id)arg1;
- (id)initVendorAgnosticWithFormatVersion:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)tlvWithKey:(id)arg1 keyValue:(id)arg2 payloadsURL:(id)arg3 error:(id*)arg4;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
