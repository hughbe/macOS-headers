/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int securityType : 1; 
    }  _has;
    NSString * _password;
    int  _securityType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
