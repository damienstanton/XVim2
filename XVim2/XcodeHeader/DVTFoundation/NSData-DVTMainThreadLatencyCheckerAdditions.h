//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>
#import <DVTFoundation/DVTPropertyListValue-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface NSData (DVTMainThreadLatencyCheckerAdditions) <DVTPropertyListValue, DVTDiffHashing>
+ (id)dvt_dataWithStrictBase64EncodedString:(id)arg1 error:(id *)arg2;
+ (id)dvt_dataWithBase64EncodedString:(id)arg1 error:(id *)arg2;
+ (id)dvt_dataWithFirstBytes:(unsigned long long)arg1 ofFile:(id)arg2 error:(id *)arg3;
- (BOOL)__DVTMainThreadLatencyChecker__writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)__DVTMainThreadLatencyChecker__writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)__DVTMainThreadLatencyChecker__writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)__DVTMainThreadLatencyChecker__writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfURL:(id)arg1;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfFile:(id)arg1;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)dvt_stringRepresentationInBase:(unsigned long long)arg1;
- (id)dvt_base64EncodedString;
- (id)dvt_lowercaseHexString;
- (id)dvt_hexString;
- (id)dvt_hexStringLowercased:(BOOL)arg1;
- (id)dvt_dataWithSHA1Digest;
- (id)dvt_dataWithMD5Digest;
- (struct __sFILE *)openForReading;
- (id)dvt_dataDecryptedWithKey:(struct __SecKey *)arg1 error:(id *)arg2;
- (id)dvt_dataEncryptedWithKey:(struct __SecKey *)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSString *stringValue;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

