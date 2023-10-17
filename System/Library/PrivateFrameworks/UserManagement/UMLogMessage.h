//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject
{
    NSMutableArray *_publicStrings;	// 8 = 0x8
    NSMutableArray *_privateStrings;	// 16 = 0x10
}

+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;	// IMP=0x00600000000095ce
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;	// IMP=0x006000000000944e
+ (id)messageWithTask:(id)arg1;	// IMP=0x00600000000093f9
+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;	// IMP=0x0060000000009352
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;	// IMP=0x00600000000091d2
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;	// IMP=0x0060000000009052
+ (id)messageWithUser:(id)arg1;	// IMP=0x0060000000008ffd
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;	// IMP=0x0060000000008f4a
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0060000000008eb4
+ (id)messageWithPublicFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0060000000008e1e
+ (id)messageWithPrivateFormat:(id)arg1;	// IMP=0x0060000000008cdb
+ (id)messageWithPublicFormat:(id)arg1;	// IMP=0x0060000000008b98
- (void).cxx_destruct;	// IMP=0x0000000000009ce8
@property(retain, nonatomic) NSMutableArray *privateStrings; // @synthesize privateStrings=_privateStrings;
@property(retain, nonatomic) NSMutableArray *publicStrings; // @synthesize publicStrings=_publicStrings;
@property(readonly, nonatomic) NSString *privateString;
@property(readonly, nonatomic) NSString *publicString;
- (id)_stringForArray:(id)arg1;	// IMP=0x0000000000009a2f
- (void)addPrivateFormat:(id)arg1;	// IMP=0x00000000000098f9
- (void)addPublicFormat:(id)arg1;	// IMP=0x00000000000097c3
- (id)init;	// IMP=0x000000000000974e

@end
