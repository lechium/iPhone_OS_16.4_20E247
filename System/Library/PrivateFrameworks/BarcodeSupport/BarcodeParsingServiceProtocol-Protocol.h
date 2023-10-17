//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIQRCodeFeature, NSData, NSDictionary, NSString, NSURL;

@protocol BarcodeParsingServiceProtocol
- (void)decodeAppClipCodeURLWithEncodedData:(NSData *)arg1 codingVersion:(unsigned long long)arg2 requiresAuthorization:(_Bool)arg3 withReply:(void (^)(NSURL *, NSError *))arg4;
- (void)setPreferredBundleIdentifier:(NSString *)arg1 forURL:(NSURL *)arg2;
- (void)parseQRCodeFeature:(CIQRCodeFeature *)arg1 withReply:(void (^)(id <BCSParsedData>, NSError *))arg2;
- (void)parseQRCodeMetadata:(NSDictionary *)arg1 withReply:(void (^)(id <BCSParsedData>, NSError *))arg2;
- (void)parseQRCodeString:(NSString *)arg1 withReply:(void (^)(id <BCSParsedData>, NSError *))arg2;
@end
