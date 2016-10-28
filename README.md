
```js
import React from 'react';
import { View } from 'react-native-macos';
import TouchBar from 'react-native-touchbar';

export default myApp = () => (
     <View style={styles.container}>
        <TouchBar>
          <Button title="Esc" onClick={() => alert('Hello, vim!')}/>
          <Button title="Courage" style={{ fontSize: 12 }} />
          <View style={{ backgroundColor: 'red', flex: 1}} />
        </TouchBar>
        <Text style={styles.welcome}>
          Welcome to React Native macOS!
        </Text>
        <Text style={styles.instructions}>
          To get started, edit index.macos.js
        </Text>
        <Text style={styles.instructions}>
          Press Cmd+R to reload,{'\n'}
          Or use Developer Menu
        </Text>
     </View>
)
```
<img width="1155" alt="screenshot 2016-10-28 16 33 21 copy" src="https://cloud.githubusercontent.com/assets/1004115/19810235/f70fc7ca-9d2c-11e6-81e4-596b53366831.png">

You need Xcode 8.1 on macOS Sierra 10.12.1 (12B2657) or later.

Enable Touchbar simulator in Xcode -> Windows menu:
![](https://help.apple.com/xcode/mac/8.1/en.lproj/Art/da_menu_show_Touch_Bar.png)
