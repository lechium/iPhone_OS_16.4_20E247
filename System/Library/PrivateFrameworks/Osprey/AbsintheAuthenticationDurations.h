//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString, NSNumber;

__attribute__((visibility("hidden")))
@interface AbsintheAuthenticationDurations : NSObject
{
    NSMutableDictionary *_absintheTimestamps;	// 8 = 0x8
    NSMutableString *_connectionMethod;	// 16 = 0x10
    NSNumber *_getCertificateElapsed;	// 24 = 0x18
    NSNumber *_createSessionElapsed;	// 32 = 0x20
    NSNumber *_sessionEstablishedElapsed;	// 40 = 0x28
    NSNumber *_absintheElapsed;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000006265
@property(retain, nonatomic) NSNumber *absintheElapsed; // @synthesize absintheElapsed=_absintheElapsed;
@property(retain, nonatomic) NSNumber *sessionEstablishedElapsed; // @synthesize sessionEstablishedElapsed=_sessionEstablishedElapsed;
@property(retain, nonatomic) NSNumber *createSessionElapsed; // @synthesize createSessionElapsed=_createSessionElapsed;
@property(retain, nonatomic) NSNumber *getCertificateElapsed; // @synthesize getCertificateElapsed=_getCertificateElapsed;
@property(retain, nonatomic) NSMutableString *connectionMethod; // @synthesize connectionMethod=_connectionMethod;
@property(retain, nonatomic) NSMutableDictionary *absintheTimestamps; // @synthesize absintheTimestamps=_absintheTimestamps;
- (id)calculateDuration:(id)arg1 and:(id)arg2;	// IMP=0x0000000000006130
- (void)setAbsintheConnectionMethodWith:(id)arg1;	// IMP=0x00000000000060e9
- (void)setAbsintheAuthenticationTimestampForKey:(id)arg1;	// IMP=0x0000000000005fd9
- (void)reportAbsintheAuthenticationDurations;	// IMP=0x0000000000005c35
- (id)init;	// IMP=0x0000000000005bc0

@end

