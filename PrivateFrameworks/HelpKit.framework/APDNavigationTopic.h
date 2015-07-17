/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDNavigationTopic : APDNavigationItem {
    NSArray *_categories;
    NSString *_href;
}

@property (nonatomic, retain) NSArray *categories;
@property (getter=isCopyright, nonatomic, readonly) BOOL copyright;
@property (getter=isGlossary, nonatomic, readonly) BOOL glossary;
@property (nonatomic, copy) NSString *href;

- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)href;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isCopyright;
- (BOOL)isGlossary;
- (void)setCategories:(id)arg1;
- (void)setHref:(id)arg1;

@end