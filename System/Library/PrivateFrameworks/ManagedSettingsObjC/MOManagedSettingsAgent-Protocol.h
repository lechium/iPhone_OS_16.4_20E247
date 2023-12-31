//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedSettingsObjC/MOEffectiveApplicationSettingsProxy-Protocol.h>
#import <ManagedSettingsObjC/MOEffectiveShieldSettingsProxy-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID;

@protocol MOManagedSettingsAgent <MOEffectiveApplicationSettingsProxy, MOEffectiveShieldSettingsProxy>
- (void)clearAllSettingsForRecordIdentifier:(NSUUID *)arg1 storeContainer:(NSString *)arg2 storeName:(NSString *)arg3 replyHandler:(void (^)(NSUUID *, NSError *))arg4;
- (void)removeValuesForSettingNames:(NSSet *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)setValues:(NSDictionary *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)getValuesForSettingNames:(NSSet *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSDictionary *, NSError *))arg5;
@end

