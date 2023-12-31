//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHMediaLibraryAccountListenerDelegate;

@interface SHMediaLibraryAccountListener : NSObject
{
    id <SHMediaLibraryAccountListenerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000029e34
@property(nonatomic) __weak id <SHMediaLibraryAccountListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentUserID;
- (void)fetchUserRecordIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000029a3a
- (void)updateUserRecordWithAccountInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002996e
- (void)fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000298f8
- (void)updateAccountInfo;	// IMP=0x00100000000297ed
- (void)observeAccountChangedNotification;	// IMP=0x00100000000296a9
- (long long)libraryStatusForAccountStatus:(long long)arg1;	// IMP=0x001000000002968f
- (void)fetchLibraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002939f
- (id)init;	// IMP=0x0010000000029353

@end

