//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString;

@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 isValid:(void (^)(_Bool))arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 shouldInvalidateWhenBackgrounded:(_Bool)arg3;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 reason:(NSString *)arg3 handler:(void (^)(_Bool))arg4;
@end
