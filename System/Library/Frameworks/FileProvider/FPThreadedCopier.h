//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPThreadedCopier : NSObject
{
    long long _numberOfInflightCopies;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_bufferLimitSemaphore;	// 16 = 0x10
    NSMutableArray *_buffers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writeQueue;	// 32 = 0x20
}

+ (id)sharedCopier;	// IMP=0x0040000000077504
- (void).cxx_destruct;	// IMP=0x000000000007848f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore; // @synthesize bufferLimitSemaphore=_bufferLimitSemaphore;
@property(nonatomic) long long numberOfInflightCopies; // @synthesize numberOfInflightCopies=_numberOfInflightCopies;
- (void)endOperation;	// IMP=0x00000000000782a0
- (void)beginOperation;	// IMP=0x0000000000078043
- (_Bool)finishReading:(int)arg1 writing:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000077efc
- (int)beginWriting:(id)arg1 overwriteDestination:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000077e5d
- (int)beginReading:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077dcf
- (_Bool)copy:(id)arg1 to:(id)arg2 overwriteDestination:(_Bool)arg3 progress:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000775f0
- (id)init;	// IMP=0x0000000000077559

@end
